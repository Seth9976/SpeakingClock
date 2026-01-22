// 函数: sub_4932fc
// 地址: 0x4932fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
uint8_t* var_8 = nullptr
int32_t var_c = 0
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi_1

if (arg2 == *(data_4b1d94 + 0x50))
    arg1, ebp_1, esi_1 = sub_4228e0(sub_404dec(arg1, data_4abfd4 + 9), var_8)

if (arg2 == *(data_4b1d94 + 0x54))
    ebp_1 = sub_4228e0(sub_404dec(arg1, data_4abfd4), ebp_1[-2])

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_493380
return sub_404bac(&ebp_1[-2], 2)
