// 函数: sub_466de8
// 地址: 0x466de8
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
edx.b = 1
int32_t* eax_1 = sub_430618(sub_42a104+0x140, edx)
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_466ae0(arg1)
HBITMAP hbmMask = sub_466cbc(arg1, arg3, eax_1)
HBITMAP hbmImage = sub_466cbc(arg1, ebx_1, eax)
int32_t var_c = ImageList_Add(arg1[0xf], hbmImage, hbmMask)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) = sub_466e81
return sub_403c68(eax_1)
