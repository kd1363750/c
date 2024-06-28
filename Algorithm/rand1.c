#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int kazu;

	srand(time(0)); //—”‚ğ‰Šú‰»(ƒVƒƒƒbƒtƒ‹)‚·‚é
	kazu = rand();  //0`32767‚Ì”ÍˆÍ‚Å—”‚ğ‹‚ß‚é
	printf("”­¶‚µ‚½—”‚Í%d‚Å‚·\n", kazu);	
}