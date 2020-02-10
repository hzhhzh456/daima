#!/usr/bin/env python3
from math import exp, log, sqrt
print("Output #11:{0:.4f}".format(exp(3)))
print("Output #12:{0:.2f}".format(log(4)))
print("Output #13:{0:.1f}".format(sqrt(81)))
print("Output #14:{0:s}".format('I\'m,enjoying learning Python.'))
print("Output #15:{0:s}".format("This is a long string.Without the backslash\
                                it would run off the page on the right\
                                in the text editor."))
print("Output #16:{0:s}".format('''You can use triple single quotes
for comment strings.'''))
string1="This is a "
string2="short string."
sentence=string1+string2
print("Output #18:{0:s}".format(sentence))
print("Output #19:{0:s}{1:s}{2:s}".format("She is ","very "*4,"beautiful."))
m=len(sentence)
print("Output #20:{0:d}".format(m))
string1="My deliverable is due in May."
string1_list1=string1.split()
string1_list2=string1.split(" ",2)
print("Output #21:{0}".format(string1_list1))
print("Output #22:FIRST PIECE:{0} SECOND PIECE:{1} THIRD PIECE:{2}"\
      .format(string1_list2[0],string1_list2[1],string1_list2))
string2="Your,deliverable,is,due,in,June"
string2_list=string2.split(',')
print("Output #23:{0}".format(string2_list))
print("Output #24:{0}{1}{2}".format(string2_list[1],string2_list[5],\
      string2_list[-1]))