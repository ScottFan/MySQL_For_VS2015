#!/usr/bin/perl
# Call mtr in out-of-source build
$ENV{MTR_BINDIR} = 'F:/Software/mysql-5.7.12/mysql-5.7.12/BUILD';
chdir('F:/Software/mysql-5.7.12/mysql-5.7.12/mysql-test');
exit(system($^X, 'F:/Software/mysql-5.7.12/mysql-5.7.12/mysql-test/mysql-test-run.pl', @ARGV) >> 8);
