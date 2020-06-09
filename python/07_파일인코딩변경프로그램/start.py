import os

def search_dir(dirname):
    result_list = []
    filenames = os.listdir(dirname)

    for filename in filenames:
        full_path = os.path.join(dirname, filename)
        print(full_path)
        if os.path.isdir(full_path):
            seach_dir(full_path)
        else:
            result_list

path = "c:\\test"
search_dir(path)