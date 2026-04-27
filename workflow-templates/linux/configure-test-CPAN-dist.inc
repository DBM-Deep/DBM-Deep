cpanm --installdeps .
(echo y;echo y;echo)|perl Build.PL
./Build test TEST_VERBOSE=1
