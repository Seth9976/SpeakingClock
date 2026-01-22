// 函数: sub_47cc68
// 地址: 0x47cc68
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
__return_addr.b += &__return_addr
__return_addr.b += &__return_addr
char var_17ffb545
char var_17ffb545_1 = var_17ffb545 + arg2 - 1
__return_addr.b += &__return_addr
*(arg1 - 4) = arg3
*(arg1 - 8) = arg1 - 4
*(arg1 - 0xc) = j_sub_40443c
TEB* fsbase
*(arg1 - 0x10) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = arg1 - 0x10
int32_t temp1 = data_4b1d14
data_4b1d14 += 1

if (temp1 == 0xffffffff)
    sub_47ca70()

*(arg1 - 8)
fsbase->NtTib.ExceptionList = *(arg1 - 0x10)
*(arg1 - 8) = sub_47ccb7
return 0
