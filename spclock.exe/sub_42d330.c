// 函数: sub_42d330
// 地址: 0x42d330
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t ecx
int32_t var_c = ecx
*(arg1 + 8) u>>= 1
*(arg1 + 0x14) = sub_42ccd0(*(arg1 + 4), zx.d(*(arg1 + 0xe)), 0x20) * *(arg1 + 8)
int32_t eax_7 = sub_42ccb0(*(arg1 + 0xe))

if (GetDC(nullptr) == 0)
    ebp_1 = sub_42ca44()

int32_t* var_28_1 = ebp_1
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
BITMAPINFO* pbmi = ebp_1[-1]
ebp_1[-5] = &(&pbmi->bmiColors)[eax_7]
enum DIB_USAGE iUsage = DIB_RGB_COLORS
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = ebp_1[-5]
HBITMAP eax_15 = CreateDIBitmap(ebp_1[-4], ebp_1[-1], 4, ExceptionList, pbmi, iUsage)
sub_42cb40(eax_15)
ebp_1[-3] = eax_15
int32_t* var_34 = ebp_1
int32_t (* var_38_1)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_17
void* ebp_2
eax_17, ebp_2 = sub_42cb50(ebp_1[-3], ebp_1[2], 0)
*arg2 = eax_17
fsbase->NtTib.ExceptionList = ExceptionList
BOOL (* var_34_1)(void* arg1 @ ebp) = sub_42d40a
return DeleteObject(*(ebp_2 - 0xc))
