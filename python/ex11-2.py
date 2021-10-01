import sys

readfile=open(sys.argv[1],'r')
myfile=open(sys.argv[2],'w')
lines= readfile.readlines()
for idx ,line in enumerate(lines):
  text=line.split('/',1)
  #print(text[0])
  out=text[0]
  #print(out.count(';',0,len(out)))
  cnt=out.count(';',0,len(out))
  if cnt == 0 or cnt==1:
    #myfile.write(out+'\n')
    ll=out+'\n'
    final=ll.splitlines()
    myfile.write(final[0]+'\n')
  else:
    fout=out.split(';')
    for i in range(cnt):
      #print(fout[i]+';\n')
      myfile.write(fout[i]+";\n")

  
