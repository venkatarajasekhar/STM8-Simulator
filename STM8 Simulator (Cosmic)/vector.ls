   1                     ; C Compiler for STM8 (COSMIC Software)
   2                     ; Parser V4.10.2 - 02 Nov 2011
   3                     ; Generator (Limited) V4.3.7 - 29 Nov 2011
   4                     ; Optimizer V4.3.6 - 29 Nov 2011
  17                     .vector:	section	.text
  18  0000               __vectab:
  19  0000 82            	dc.b	130
  20  0001 00            	dc.b	page(f__stext)
  21  0002 0000          	dc.w	f__stext
  22  0004 82000000      	dc.b	130,0,0,0
  23  0008 82000000      	dc.b	130,0,0,0
  24  000c 82000000      	dc.b	130,0,0,0
  25  0010 82000000      	dc.b	130,0,0,0
  26  0014 82000000      	dc.b	130,0,0,0
  27  0018 82000000      	dc.b	130,0,0,0
  28  001c 82000000      	dc.b	130,0,0,0
  29  0020 82000000      	dc.b	130,0,0,0
  30  0024 82000000      	dc.b	130,0,0,0
  31  0028 82000000      	dc.b	130,0,0,0
  32  002c 82000000      	dc.b	130,0,0,0
  33  0030 82000000      	dc.b	130,0,0,0
  34  0034 82000000      	dc.b	130,0,0,0
  35  0038 82000000      	dc.b	130,0,0,0
  36  003c 82000000      	dc.b	130,0,0,0
  37  0040 82000000      	dc.b	130,0,0,0
  38  0044 82000000      	dc.b	130,0,0,0
  39  0048 82000000      	dc.b	130,0,0,0
  40  004c 82000000      	dc.b	130,0,0,0
  41  0050 82            	dc.b	130
  42  0051 00            	dc.b	page(f_recept)
  43  0052 0000          	dc.w	f_recept
  44  0054 82000000      	dc.b	130,0,0,0
  45  0058 82000000      	dc.b	130,0,0,0
  46  005c 82000000      	dc.b	130,0,0,0
  47  0060 82000000      	dc.b	130,0,0,0
  48  0064 82000000      	dc.b	130,0,0,0
  49  0068 82000000      	dc.b	130,0,0,0
  50  006c 82000000      	dc.b	130,0,0,0
  51  0070 82000000      	dc.b	130,0,0,0
  52  0074 82000000      	dc.b	130,0,0,0
  53  0078 82000000      	dc.b	130,0,0,0
  54  007c 82000000      	dc.b	130,0,0,0
  87                     	xdef	__vectab
  88                     	xref	f_recept
  89                     	xref	f__stext
 108                     	end
