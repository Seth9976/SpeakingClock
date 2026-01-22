// 函数: sub_419dec
// 地址: 0x419dec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t (* ebp)(void* arg1, void* arg2)
int32_t (* var_4)(void* arg1, void* arg2) = ebp
int32_t* ExceptionList = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
void* esi_1 = arg2
arg2.b = 1
ExceptionList = sub_41d37c(arg1, arg2, sub_4182b4+0x19c, 0x400)
(**ExceptionList)()
ExceptionList[7] = arg3
__return_addr = &var_4
var_4 = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4207f4(ExceptionList, esi_1)
fsbase->NtTib.ExceptionList = ExceptionList
__return_addr = sub_419e50
return sub_403c68(ExceptionList)
