// 函数: sub_4805a4
// 地址: 0x4805a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (SendMessageA(sub_45f888(*(arg1 + 0x18)), 0x1309, 0, 0) == 0)
    sub_406a30(data_4ac304, &var_8)
    sub_48058c(var_8)

sub_481360(*(arg1 + 0x18))
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_48060f
int64_t** result = &var_8
sub_404b88(result)
return result
