// 函数: sub_402318
// 地址: 0x402318
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_1
int32_t edx
edx:eax_1 = mulu.dp.d(arg1 + 1, 0x89705f41)
uint32_t ecx_1 = edx u>> 0x1d
int32_t edx_3 = (edx & 0x1fffffff) * 5 + (eax_1 u>> 0x1e)
*arg2 = ecx_1.b | 0x30
char* edi_1 = sbb.d(arg2, 0xffffffff, ecx_1 u< 1)
uint32_t eax_6 = edx_3 u>> 0x1c
int32_t edx_4 = edx_3 & 0xfffffff
uint32_t ecx_2 = ecx_1 | eax_6
*edi_1 = eax_6.b | 0x30
char* edi_2 = sbb.d(edi_1, 0xffffffff, ecx_2 u< 1)
uint32_t eax_9 = (edx_4 * 5) u>> 0x1b
int32_t edx_6 = (edx_4 * 5) & 0x7ffffff
uint32_t ecx_3 = ecx_2 | eax_9
*edi_2 = eax_9.b | 0x30
char* edi_3 = sbb.d(edi_2, 0xffffffff, ecx_3 u< 1)
uint32_t eax_12 = (edx_6 * 5) u>> 0x1a
int32_t edx_8 = (edx_6 * 5) & 0x3ffffff
uint32_t ecx_4 = ecx_3 | eax_12
*edi_3 = eax_12.b | 0x30
char* edi_4 = sbb.d(edi_3, 0xffffffff, ecx_4 u< 1)
uint32_t eax_15 = (edx_8 * 5) u>> 0x19
int32_t edx_10 = (edx_8 * 5) & 0x1ffffff
uint32_t ecx_5 = ecx_4 | eax_15
*edi_4 = eax_15.b | 0x30
char* edi_5 = sbb.d(edi_4, 0xffffffff, ecx_5 u< 1)
uint32_t eax_18 = (edx_10 * 5) u>> 0x18
int32_t edx_12 = (edx_10 * 5) & 0xffffff
uint32_t ecx_6 = ecx_5 | eax_18
*edi_5 = eax_18.b | 0x30
char* edi_6 = sbb.d(edi_5, 0xffffffff, ecx_6 u< 1)
uint32_t eax_21 = (edx_12 * 5) u>> 0x17
int32_t edx_14 = (edx_12 * 5) & 0x7fffff
uint32_t ecx_7 = ecx_6 | eax_21
*edi_6 = eax_21.b | 0x30
char* edi_7 = sbb.d(edi_6, 0xffffffff, ecx_7 u< 1)
uint32_t eax_24 = (edx_14 * 5) u>> 0x16
int32_t edx_16 = (edx_14 * 5) & 0x3fffff
uint32_t ecx_8 = ecx_7 | eax_24
*edi_7 = eax_24.b | 0x30
char* edi_8 = sbb.d(edi_7, 0xffffffff, ecx_8 u< 1)
uint32_t eax_27 = (edx_16 * 5) u>> 0x15
*edi_8 = eax_27.b | 0x30
char* edi_9 = sbb.d(edi_8, 0xffffffff, (ecx_8 | eax_27) u< 1)
*edi_9 = ((((edx_16 * 5) & 0x1fffff) * 5) u>> 0x14).b | 0x30
return &edi_9[1]
