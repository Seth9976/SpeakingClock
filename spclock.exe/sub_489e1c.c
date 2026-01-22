// 函数: sub_489e1c
// 地址: 0x489e1c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_c = arg3
sub_48a410(arg1)
sub_41caa0(arg2, &var_c, 4)

if (var_c s> 0)
    int32_t* esi_1 = sub_4889cc(arg2, arg1[0x1c], zx.d(*(arg1 + 0x4e)))
    
    if (*(arg1 + 0x7d) == 0)
        (*(*arg1[0x1d] + 0x40))()
    else
        sub_4889cc(esi_1, arg1[0x1d], zx.d(*(arg1 + 0x4e)))

arg1[0x16] = (*(*arg1[0x1c] + 0x2c))()
return sub_489c34(arg1, var_c)
