// 函数: sub_431d30
// 地址: 0x431d30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HPALETTE ho_2
HPALETTE ho = ho_2
char result
int32_t edx
result, edx = sub_430cd8(arg1)

if (arg2 == result)
    return result

if (arg2 u< 1)
    edx.b = 1
    return (*(*arg1 + 0x70))()

if (arg2 == 8)
    return sub_42ca08(data_4ac108)

void var_61
sub_403578(&var_61, 0x54, 0)
void* eax_6 = arg1[0xa]
__builtin_memcpy(&var_61, eax_6 + 0x18, 0x18)
char var_d = 0
int32_t var_4d = 0
int32_t var_49 = 0x28
int32_t var_5d
int32_t var_45 = var_5d
int32_t var_59
int32_t var_41 = var_59
int16_t var_3d = 1
uint16_t var_3b = zx.w(*(zx.d(arg2) + 0x4aaf07))
HPALETTE ho_1 = *(eax_6 + 0x10)

if (arg2 == 2)
    ho_1 = data_4b1a48
else if (arg2 == 3)
    HDC eax_9 = GetDC(nullptr)
    sub_42cb40(eax_9)
    ho_1 = CreateHalftonePalette(eax_9)
    var_d = 1
    ReleaseDC(nullptr, eax_9)
else if (arg2 == 5)
    int32_t var_39_1 = 3
    int32_t var_21_1 = 0xf800
    int32_t var_1d_1 = 0x7e0
    int32_t var_19_1 = 0x1f

HPALETTE* var_74_4 = &ho
int32_t (* var_78_2)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4307b8(ho_1, (*(*arg1 + 0x68))(&var_61, ExceptionList, var_78_2, var_74_4), arg1, ho_1)
*(arg1 + 0x22) = ho_1 != 0
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_431e83

if (var_d == 0)
    return 0

ho = ho_1
return DeleteObject(ho)
