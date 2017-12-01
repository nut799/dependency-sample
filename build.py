import os
import shutil

dependency_name = 'dependency-sample'

home_dir = os.getenv(key='EZORED_PROJECT_HOME')
current_dir = os.getcwd()
vendor_dir = os.path.join(home_dir, 'vendor')
temp_dir = os.path.join(home_dir, 'temp')

print "Sample :: Build script"
print "Sample :: EZORED_PROJECT_HOME: %s" % (home_dir)
print "Sample :: WORKING_DIR: %s" % (current_dir)
print "Sample :: VENDOR_DIR: %s" % (vendor_dir)
print "Sample :: TEMP_DIR: %s" % (temp_dir)

try:
    shutil.rmtree(path=os.path.join(vendor_dir, dependency_name))
except:
    pass

shutil.copytree(os.path.join(current_dir, 'build'), os.path.join(vendor_dir, dependency_name))