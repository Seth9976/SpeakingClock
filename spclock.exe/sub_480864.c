// 函数: sub_480864
// 地址: 0x480864
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_3c = ebx
int32_t esi
int32_t var_40 = esi
int32_t edi
int32_t var_44 = edi
int64_t* var_24 = nullptr
char* var_28 = nullptr
int32_t* var_48 = &var_4
int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t lParam = *(((sub_457ee4(*(arg1 + 0x18)) & 0x7f) << 2) + &data_4abc4c) | 1 | 2
int32_t var_14 = sub_405018(arg3)
int32_t var_c = (*(**(arg1 + 0x18) + 0xe0))(ExceptionList, var_4c, var_48)

if (SendMessageA(sub_45f888(*(arg1 + 0x18)), 0x1306, arg2, &lParam) == 0)
    int32_t* var_c_2 = &var_24
    sub_406a30(data_4ac3a8, &var_28)
    char* eax_14 = var_28
    int32_t var_38 = arg3
    char var_34_1 = 0xb
    WPARAM var_30_1 = arg2
    char var_2c_1 = 0
    sub_40a37c(1, &var_38, eax_14, var_c_2)
    sub_48058c(var_24)

sub_481360(*(arg1 + 0x18))
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_48093d
return sub_404bac(&var_28, 2)
