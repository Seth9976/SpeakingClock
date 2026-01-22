// 函数: sub_466eb4
// 地址: 0x466eb4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t* ebx_1 = arg2
arg2.b = 1
int32_t* eax
int32_t edx
eax, edx = sub_430618(sub_42a104+0x140, arg2)
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList

if (*(arg1 + 0x41) == 0 || arg3 == 0xffffffff)
    HBITMAP hbmMask = nullptr
    HBITMAP hbmImage_1 = sub_466cbc(arg1, ebx_1, eax)
    ExceptionList = sub_466cac(arg1)
    int32_t var_c_2 = ImageList_Add(ExceptionList, hbmImage_1, hbmMask)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_466fba
    return sub_403c68(eax)

edx.b = 1
int32_t* eax_2 = sub_430618(sub_42a104+0x140, edx)
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*eax_2 + 8))(ExceptionList, var_30, var_2c)
sub_431e98(eax_2, arg3)
sub_466ae0(arg1)
HBITMAP hbmMask_1 = sub_466c9c(arg1, (*(*eax_2 + 0x6c))(arg1))
HBITMAP hbmImage = sub_466cbc(arg1, ebx_1, eax)
HIMAGELIST himl = arg1[0xf]
int32_t var_c_1 = ImageList_Add(himl, hbmImage, hbmMask_1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_466f9d
return sub_403c68(himl)
