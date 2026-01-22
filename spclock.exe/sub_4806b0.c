// 函数: sub_4806b0
// 地址: 0x4806b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* var_1004 = arg1
int32_t ebx
int32_t var_1034 = ebx
int32_t esi
int32_t var_1038 = esi
int32_t edi
int32_t var_103c = edi
int64_t* var_1024 = nullptr
char* var_1028 = nullptr
int32_t* var_1040 = &var_4
int32_t (* var_1044)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t lParam = *(((sub_457ee4(*(arg1 + 0x18)) & 0x7f) << 2) + &data_4abc44) | 1
int64_t var_1020[0x3]
int64_t (* var_14)[0x3] = &var_1020
int32_t var_10 = 0x1000

if (SendMessageA(sub_45f888(*(arg1 + 0x18)), 0x1305, arg2, &lParam) == 0)
    sub_406a30(data_4ac24c, &var_1028)
    char* eax_9 = var_1028
    WPARAM var_1030 = arg2
    char var_102c_1 = 0
    sub_40a37c(0, &var_1030, eax_9, &var_1024)
    sub_48058c(var_1024)

sub_404df8(arg3, &var_1020, 0x1000)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_1040_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_48079f
return sub_404bac(&var_1028, 2)
