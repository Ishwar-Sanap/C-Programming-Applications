	.file	"Marvellous.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Inside main \0"
LC2:
	.ascii " no = %d \12\0"
	.align 4
LC3:
	.ascii "Size of structure Demo : %d Bytes \12\0"
LC4:
	.ascii "Macro ie MAX = %d \12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_puts
	movl	$11, 19(%esp)
	flds	LC1
	fstps	24(%esp)
	movb	$73, 23(%esp)
	movl	19(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$9, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$100, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$0, 28(%esp)
	call	_fun
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.section .rdata,"dr"
LC6:
	.ascii "Inside the demo function \0"
	.text
	.globl	_fun
	.def	_fun;	.scl	2;	.type	32;	.endef
_fun:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$LC6, (%esp)
	call	_puts
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.section .rdata,"dr"
	.align 4
LC1:
	.long	1078523331
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
