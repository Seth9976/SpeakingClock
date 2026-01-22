// 函数: sub_4a0730
// 地址: 0x4a0730
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t var_c = 0
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404b88(arg3)

if (arg2 != 0 || *(arg1 + 0x44) == 0)
    sub_404c20(&var_8, arg2)
else
    (*(**(arg1 + 0x44) + 0x10))()

if (var_8 == 0 && data_4b1dbc != 0)
    (*(*data_4b1dbc + 0x20))()

if (data_4b1dbc != 0)
    (*(*data_4b1dbc + 0x1c))()
    var_c = var_c
    void* const var_10_1 = &data_4a07fc
    int64_t* var_14_1 = var_8
    sub_404f1c(&var_8, 3)
    esp = &var_8

sub_404bdc(arg3, var_8)
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4a07ec
return sub_404bac(&var_c, 2)
