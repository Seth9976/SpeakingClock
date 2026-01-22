// 函数: sub_45d430
// 地址: 0x45d430
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t nSavedDC = SaveDC(arg1)
int32_t* var_20_1 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
ExcludeClipRect(arg1, *arg2 + 2, arg2[1] + 2, arg2[2] - 2, arg2[3] - 2)
sub_4659bc()
int32_t edx
edx.b = 2
void var_1c
sub_465db0(&var_1c, edx)
sub_465bd0(&var_1c, arg1, sub_4659bc(), 0, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
BOOL (* var_20_2)(int32_t* arg1 @ ebp) = sub_45d4cd
ExceptionList = arg1
return RestoreDC(ExceptionList, nSavedDC)
