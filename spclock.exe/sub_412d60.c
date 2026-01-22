// 函数: sub_412d60
// 地址: 0x412d60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

VARIANT pvarg
VariantInit(&pvarg)
pvarg...w = 5
pvarg...__offset(0x8).d = arg2
pvarg...__offset(0xc).d = arg3
sub_41040c((*data_4ac3b8)(&pvarg, &pvarg, 0x400, 0, 7), *arg1, 7)
int32_t var_8 = pvarg...__offset(0xc).d
return fconvert.t(pvarg...__offset(0x8).d.q)
