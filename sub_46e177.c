// 函数: sub_46e177
// 地址: 0x46e177
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*arg1 += arg2:1.b
*arg1 += arg1.b
int32_t entry_ebx
entry_ebx.b += arg1.b
int32_t var_4 = entry_ebx
sub_46d084(arg1, arg2, arg3)
sub_45f340(arg1, arg2, arg3)

if (sub_46e268(arg1) != 0)
    int32_t nNumber = sub_457190(arg1)
    sub_46e528(arg1, MulDiv(sub_45714c(arg1), arg2, arg3))
    sub_46e55c(arg1, MulDiv(nNumber, arg2, arg3))

void* ebp_2 = *(arg1 + 0x68)
sub_42b618(ebp_2, MulDiv(sub_42b5fc(ebp_2), arg2, arg3))
return sub_45728c(arg1, arg2, arg3)
