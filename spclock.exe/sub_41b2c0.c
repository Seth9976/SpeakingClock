// 函数: sub_41b2c0
// 地址: 0x41b2c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t var_8 = ecx

if (sub_403df4(arg2, &data_417c30) == 0)
    return sub_41a70c(ecx, arg2)

sub_41b378(arg1)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x44))(ExceptionList, var_18, var_14)
arg1[1].b = arg2[1].b
*(arg1 + 0xd) = *(arg2 + 0xd)
arg1[3].b = arg2[3].b
*(arg1 + 5) = *(arg2 + 5)
sub_404bdc(&arg1[2], arg2[2])
*(arg1 + 0xe) = *(arg2 + 0xe)
(*(*arg1 + 0x40))(arg1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_41b371
return sub_41b434(arg1)
