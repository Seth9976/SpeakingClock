// 函数: sub_48e814
// 地址: 0x48e814
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg5 == 0 || arg1 == 0)
    return 

if (arg4 != 0)
    (*(*arg5 + 8))()

uint32_t eax_3 = zx.d(sub_42ad8c(arg3))
uint32_t eax_7 = zx.d(sub_4079a0(sub_42ad8c(arg3)))
uint32_t eax_11 = zx.d(sub_40799c(sub_42ad8c(arg3)))
char eax_13 = sub_42ad8c(arg2)
uint32_t nNumerator = zx.d(sub_4079a0(sub_42ad8c(arg2))) - eax_7
uint32_t nNumerator_1 = zx.d(sub_40799c(sub_42ad8c(arg2))) - eax_11
int32_t nNumber_1

nNumber_1 = arg4 == 0 ? 1 : 0

int32_t nNumber = nNumber_1

if (zx.d(arg1) - 1 s< nNumber)
    return 

int32_t i_1 = zx.d(arg1) - 1 - nNumber + 1
int32_t i

do
    sub_419f9c(arg5, 
        sub_407968(MulDiv(nNumber, zx.d(eax_13) - eax_3, zx.d(arg1) - 1) + eax_3.b, 
            MulDiv(nNumber, nNumerator_1, zx.d(arg1) - 1) + eax_11.b, 
            MulDiv(nNumber, nNumerator, zx.d(arg1) - 1) + eax_7.b))
    nNumber += 1
    i = i_1
    i_1 -= 1
while (i != 1)
