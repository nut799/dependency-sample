import os
import shutil

dependency_name = 'dependency-sample'

home_dir = os.getenv(key='EZORED_PROJECT_HOME')
current_dir = os.getcwd()
vendor_dir = os.getenv(key='EZORED_REPOSITORY_VENDOR_DIR')
temp_dir = os.getenv(key='EZORED_REPOSITORY_TEMP_DIR')

print('Sample :: Build script')
print('Sample :: EZORED_PROJECT_HOME: {0}'.format(home_dir))
print('Sample :: WORKING_DIR: {0}'.format(current_dir))
print('Sample :: VENDOR_DIR: {0}'.format(vendor_dir))
print('Sample :: TEMP_DIR: {0}'.format(temp_dir))

try:
    shutil.rmtree(path=os.path.join(vendor_dir, dependency_name))
except:
    pass

shutil.copytree(os.path.join(current_dir, 'build'), vendor_dir)