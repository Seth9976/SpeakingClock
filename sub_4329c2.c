// 函数: sub_4329c2
// 地址: 0x4329c2
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1[-1] != 0)
    sub_404e24(&arg1[-0x42], arg1[-1], 0xff)
    sub_403468("\rMS Sans Serif", &arg1[-0x42], 0x1f)

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_404b88(&arg1[-1])
*arg1
return &arg1[-1]
