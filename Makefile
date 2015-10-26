try: admin.o writerec.o showprod.o readrec.o retdisc.o subtdisc.o partprod.o mod_rec.o del_rec.o
	cc admin.o writerec.o showprod.o readrec.o retdisc.o subtdisc.o partprod.o mod_rec.o del_rec.o -o try 


admin.o: admin.c market.h 
	cc -c admin.c 

writerec.o: writerec.c market.h
	cc -c writerec.c

showprod.o: showprod.c market.h
	cc -c showprod.c

readrec.o: readrec.c market.h
	cc -c readrec.c

retdisc.o: retdisc.c market.h
	cc -c retdisc.c

subtdisc.o: subtdisc.c market.h
	cc -c subtdisc.c

partprod.o: partprod.c market.h
	cc -c partprod.c

mod_rec.o: mod_rec.c market.h
	cc -c mod_rec.c

del_rec.o: del_rec.c market.h
	cc -c del_rec.c

clean: rm *.o
