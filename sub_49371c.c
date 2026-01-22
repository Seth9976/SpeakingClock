// 函数: sub_49371c
// 地址: 0x49371c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int64_t* var_c = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg2
sub_405008(var_8)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_430cd8(arg1) - 6 u>= 2)
    void* const var_20_1 = "Wrong PixelFormat in "
    struct _EXCEPTION_REGISTRATION_RECORD* var_24_1 = var_8
    void* const var_28_1 = " bitmap!"
    sub_404f1c(&var_c, 3)
    esp = &var_8
    int32_t edx
    edx.b = 1
    sub_40451c(sub_40ceb0(0x4936b8, edx, var_c))

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4937a7
return sub_404bac(&var_c, 2)
