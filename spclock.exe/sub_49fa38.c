// 函数: sub_49fa38
// 地址: 0x49fa38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x48) == 0)
    return 

SetForegroundWindow(*(arg1 + 0xfc))
sub_476a80(*data_4ac2fc)
int32_t* eax_3 = *(arg1 + 0x48)
eax_3[0x19] = arg1
(*(*eax_3 + 0x40))()
int32_t* __saved_edx_2 = *(arg1 + 4)

if (sub_403df4(__saved_edx_2, &data_453234).b != 0)
    sub_403e18(__saved_edx_2, &data_453234)
    PostMessageA(sub_45f888(__saved_edx_2), 0, 0, 0)
