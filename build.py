import os
import shutil

dependency_name = 'helloworld'

rootDir = os.getenv(key='EZO_ROOT')
currentDir = os.getcwd()
vendorDir = os.path.join(rootDir, 'vendor')
tempDir = os.path.join(rootDir, 'temp')

print "HelloWorld :: Build script"
print "HelloWorld :: EZO_ROOT: %s" % (rootDir)
print "HelloWorld :: WORKING_DIR: %s" % (currentDir)
print "HelloWorld :: VENDOR_DIR: %s" % (vendorDir)
print "HelloWorld :: TEMP_DIR: %s" % (tempDir)

try:
    shutil.rmtree(path=os.path.join(vendorDir, dependency_name))
except:
    pass

shutil.copytree(os.path.join(currentDir, 'build'), os.path.join(vendorDir, dependency_name))