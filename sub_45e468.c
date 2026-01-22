// 函数: sub_45e468
// 地址: 0x45e468
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp

if (*(arg2 + 0xc) != 0)
    return arg2

int32_t* esi = *(arg2 + 4) + 0x4c
POINT var_1c
var_1c.x = *esi
var_18
void* edi = &var_18
void* esi_1 = &esi[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
uint32_t cPoints = 2
POINT* lpPoints = &var_1c
HWND ExceptionList = sub_45f888(arg1)
MapWindowPoints(nullptr, ExceptionList, lpPoints, cPoints)
sub_45b310(arg1)
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_4
esi_4.w = 0xffcc
sub_403e64(*(*(arg2 + 4) + 0x40), esi_4, arg1, &var_1c, ExceptionList, var_30, var_2c)

if (*(arg1 + 0x1db) != 0 && arg1[0x6c] != 0)
    void* eax_12 = *(arg2 + 4)
    *(eax_12 + 0x5c)
    *(eax_12 + 0x40)
    (*(*arg1[0x6c] + 0x18))(*(eax_12 + 0x60))

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_45e532
return sub_45b318(arg1)
