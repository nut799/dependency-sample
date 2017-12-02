package com.ezored.sample;

import android.content.Context;
import android.content.DialogInterface;
import android.support.v4.app.ActivityManagerCompat;
import android.support.v7.app.AlertDialog;

/**
 * Platform-Specific implementation of HelloWorldProxy Class
 */
public class HelloWorldProxyImpl extends HelloWorldProxy {

	private Context context;

	public HelloWorldProxyImpl(Context context) {
		this.context = context;
	}

	public void showGreetingMessageAlert() {
		AlertDialog.Builder builder = new AlertDialog.Builder(context);

		builder.setTitle("Title");
		builder.setMessage("Message from proxy Java code");
		builder.setNegativeButton("OK", new DialogInterface.OnClickListener() {
			public void onClick(DialogInterface dialog, int id) {
				dialog.dismiss();
			}
		});

		builder.create().show();
	}

}
