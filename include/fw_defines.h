#ifndef FW_DEFINES_H
#define FW_DEFINES_H

#define K405_XFAST_SYSCALL         0x0030EB30
#define K455_XFAST_SYSCALL         0x003095D0
#define K474_XFAST_SYSCALL         0x0030B7D0
#define K501_XFAST_SYSCALL         0x000001C0
#define K503_XFAST_SYSCALL         0x000001C0
#define K505_XFAST_SYSCALL         0x000001C0
#define K672_XFAST_SYSCALL         0x000001C0

#define K405_PRISON_0              0x00F26010
#define K455_PRISON_0              0x010399B0
#define K474_PRISON_0              0x01042AB0
#define K501_PRISON_0              0x010986A0
#define K503_PRISON_0              0x010986A0
#define K505_PRISON_0              0x010986A0
#define K672_PRISON_0              0x0113E518

#define K405_ROOTVNODE             0x0206D250
#define K455_ROOTVNODE             0x021AFA30
#define K474_ROOTVNODE             0x021B89E0
#define K501_ROOTVNODE             0x022C19F0
#define K503_ROOTVNODE             0x022C1A70
#define K505_ROOTVNODE             0x022C1A70
#define K672_ROOTVNODE             0x02300320

#define K405_PRINTF                0x00347580
#define K455_PRINTF                0x00017F30
#define K474_PRINTF                0x00017F30
#define K501_PRINTF                0x00435C70
#define K503_PRINTF                0x00436000
#define K505_PRINTF                0x00436040
#define K672_PRINTF                0x00123280

#define K405_COPYIN                0x00286DF0
#define K455_COPYIN                0x0014A890
#define K474_COPYIN                0x00149F20
#define K501_COPYIN                0x001EA600
#define K503_COPYIN                0x001EA710
#define K505_COPYIN                0x001EA710
#define K672_COPYIN                0x003C17A0

#define K405_COPYOUT               0x00286D70
#define K455_COPYOUT               0x0014A7B0
#define K474_COPYOUT               0x00149E40
#define K501_COPYOUT               0x001EA520
#define K503_COPYOUT               0x001EA630
#define K505_COPYOUT               0x001EA630
#define K672_COPYOUT               0x003C16B0

#define K405_SET_TIME              0x00609920 // Needs Verified
#define K455_SET_TIME              0x00617570
#define K474_SET_TIME              0x0061A960
#define K501_SET_TIME              0x00633CB0
#define K503_SET_TIME              0x00634050
#define K505_SET_TIME              0x00634090
#define K672_SET_TIME              0x006512E0

#define K405_CLEAR_TIME_DIFFERENCE 0x00000000 // Needs Verified
#define K455_CLEAR_TIME_DIFFERENCE 0x00617B50
#define K474_CLEAR_TIME_DIFFERENCE 0x0061AF40
#define K501_CLEAR_TIME_DIFFERENCE 0x006342B0
#define K503_CLEAR_TIME_DIFFERENCE 0x00634650
#define K505_CLEAR_TIME_DIFFERENCE 0x00634690
#define K672_CLEAR_TIME_DIFFERENCE 0x006507D0

#endif
