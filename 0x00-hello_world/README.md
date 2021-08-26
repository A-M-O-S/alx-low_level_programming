
gcc -E $CFILE > c is used to run a file through a preprocessor and saves the file in another file $CFILE
gcc -c $CFILE > $(echo $CFILE|cut -d"." -f1).o is used to c but not link
