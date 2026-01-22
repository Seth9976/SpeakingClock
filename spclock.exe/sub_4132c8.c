// 函数: sub_4132c8
// 地址: 0x4132c8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

VARIANT pvarg
VariantInit(&pvarg)
pvarg...w = 5
pvarg...__offset(0x8).d = arg2
pvarg...__offset(0xc).d = arg3
sub_41040c((*data_4ac3b8)(&pvarg, &pvarg, 0x400, 0, 6), *arg1, 6)
int32_t var_8 = pvarg...__offset(0xc).d
return float.t(pvarg...__offset(0x8).d.q)
