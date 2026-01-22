// 函数: sub_480614
// 地址: 0x480614
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int64_t* var_8 = nullptr
char* var_c = nullptr
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (SendMessageA(sub_45f888(*(arg1 + 0x18)), 0x1308, arg2, 0) == 0)
    sub_406a30(data_4ac2c4, &var_c)
    char* eax_4 = var_c
    WPARAM var_14 = arg2
    char var_10_1 = 0
    sub_40a37c(0, &var_14, eax_4, &var_8)
    sub_48058c(var_8)

sub_481360(*(arg1 + 0x18))
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4806a7
return sub_404bac(&var_c, 2)
