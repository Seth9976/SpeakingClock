// 函数: sub_42d67c
// 地址: 0x42d67c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 - 0x24) = 0
*(arg1 - 0x20) = sub_42d4f0(zx.d(*(*(arg1 - 0x10) + 2)))
int32_t i_1 = *(arg1 - 0xc) - 1

if (i_1 s> 0)
    int32_t esi_1 = 1
    int32_t i
    
    do
        int32_t eax_6 = sub_42d4f0(zx.d(*(*(arg1 - 0x10) + esi_1 * 0x10 + 2)))
        
        if (eax_6 s<= *(arg1 - 0x1c) && eax_6 s>= *(arg1 - 0x20))
            void* var_4_1 = arg1
            void* ecx_1 = *(arg1 - 0x10)
            
            if (sub_42d4fc(ecx_1 + *(arg1 - 0x24) * 0x10, *(arg1 - 0x10) + esi_1 * 0x10, ecx_1)
                    != 0)
                *(arg1 - 0x24) = esi_1
                *(arg1 - 0x20) = eax_6
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 - 0x40) = *(arg1 - 0x10) + *(arg1 - 0x24) * 0x10
**(arg1 + 8) = zx.d(**(arg1 - 0x40))
*(*(arg1 + 8) + 4) = zx.d(*(*(arg1 - 0x40) + 1))
int32_t eax_22
int32_t ecx_3
eax_22, ecx_3 = sub_402e90(*(*(arg1 - 0x40) + 8))
*(arg1 - 0x2c) = eax_22
int32_t (* ExceptionList_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(*(arg1 - 0x40) + 0xc)
*(arg1 - 0x14) + *(arg1 + 0x10)
ecx_3.w = 1
(*(**(arg1 - 4) + 0x14))(ExceptionList, ExceptionList_1, arg1)
*(*(arg1 - 0x40) + 8)
void* ebx_3 = *(arg1 - 0x2c)
(*(**(arg1 - 4) + 0xc))()
__return_addr = *(arg1 + 8)
sub_42d330(ebx_3, arg1 - 0x34)
int32_t c = 0x18
ExceptionList_1 = *(arg1 - 0x38)
GetObjectA(ExceptionList_1, c, arg1 - 0x70)
int32_t c_1 = 0x18
ExceptionList_1 = *(arg1 - 0x34)
GetObjectA(ExceptionList_1, c_1, arg1 - 0x58)
int32_t cb = *(arg1 - 0x64) * *(arg1 - 0x68) * zx.d(*(arg1 - 0x60))
*(arg1 - 0x3c) = *(arg1 - 0x4c) * *(arg1 - 0x50) * zx.d(*(arg1 - 0x48))
*(arg1 - 0x18) = *(arg1 - 0x3c) + cb
*(arg1 - 0x30) = sub_402e90(*(arg1 - 0x18))
__return_addr = arg1
int32_t (* var_4_3)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
uint8_t* lpbANDbits = *(arg1 - 0x30)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = *(arg1 - 0x30) + cb
ExceptionList = lpbANDbits
GetBitmapBits(*(arg1 - 0x38), cb, ExceptionList)
ExceptionList = ExceptionList_2
GetBitmapBits(*(arg1 - 0x34), *(arg1 - 0x3c), ExceptionList)
ExceptionList = *(arg1 - 0x34)
DeleteObject(ExceptionList)
ExceptionList = *(arg1 - 0x38)
DeleteObject(ExceptionList)
ExceptionList = ExceptionList_2
**(arg1 - 8) = CreateIcon(data_4af7f4, **(arg1 + 8), *(*(arg1 + 8) + 4), *(arg1 - 0x48), 
    *(arg1 - 0x46), lpbANDbits, ExceptionList)

if (**(arg1 - 8) == 0)
    sub_42ca98()

fsbase->NtTib.ExceptionList = ExceptionList_1
__return_addr = sub_42d849
*(arg1 - 0x18)
return sub_402ec4(*(arg1 - 0x30))
