import os

SEPARATOR = '_'
EXT = ".png"
digits = range(1, 10)

for d in digits:
	i = 1
	for file in os.listdir(str(d)):
		if file.endswith(EXT):
			filepath = str(d) + '/'
			old_filename = filepath + file
			new_filename = filepath + str(d) + SEPARATOR + str(i) + EXT
			os.rename(old_filename, new_filename)
	    	i += 1