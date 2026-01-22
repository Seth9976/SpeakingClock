// 函数: sub_4954bc
// 地址: 0x4954bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* result = *(arg1 + 0x2c)

if (*(result + 0x20) == 0)
    return result

void* var_18
sub_418a64((*(*arg2 + 0x2c))(&var_18, (*(*arg2 + 0x20))() - 1) - 1, 0, 0)
int32_t* eax_5 = sub_430618(sub_42a104+0x140, 1)
int32_t* var_c_1 = &var_4
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = var_18
(*(*eax_5 + 0x40))(ExceptionList, var_10_1, var_c_1)
(*(*eax_5 + 0x34))(eax_5)
uint32_t var_c_2 = 0xffffff
RECT var_28
sub_42c714(sub_430bec(eax_5), &var_28)
sub_494bac(&var_28, sub_430bec(eax_5), *(arg1 + 0x2c), var_c_2)
sub_431e98(eax_5, sub_430dc4(*(*(arg1 + 0x2c) + 0x18)))
sub_431d30(arg2, 6)
sub_431d30(eax_5, 6)
void var_30
sub_418a3c(0, 0, &var_30)
void* var_c_3 = &var_30
int32_t* var_10_3 = arg2
ExceptionList = *(arg1 + 0x1c)
void var_38
sub_418a3c(edi, ExceptionList, &var_38)
var_18 = &var_38
sub_493e80(arg2)
fsbase->NtTib.ExceptionList = eax_5
__return_addr = &data_4955d6
return sub_403c68(eax_5)
