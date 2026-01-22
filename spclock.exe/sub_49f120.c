// 函数: sub_49f120
// 地址: 0x49f120
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1
*arg1 += arg1.b
*(arg6 + 0x40)
*(arg3 + (arg5 << 3)) += arg3:1.b
arg1.b += (arg3.w - 1):1.b
int16_t entry_ebx
char temp1 = mods.dp.b(arg1.w, entry_ebx:1.b)
arg1.b = divs.dp.b(arg1.w, entry_ebx:1.b)
arg1:1.b = temp1
TEB* fsbase
fsbase->NtTib.ExceptionList = &__return_addr
arg7 = sub_49f195

if ((*(*(arg4 - 4) + 0x1c) & 0x10) == 0)
    __return_addr = *(arg4 - 4)
    sub_476b18(*data_4ac2fc, sub_49f294)
    
    if (sub_403df4(*(*(arg4 - 4) + 4), &data_453234) != 0)
        sub_49f408(*(arg4 - 4))

sub_49ee10()
uint32_t edx_1
edx_1.b = *(arg4 - 5) & 0xfc
return sub_423380(*(arg4 - 4), edx_1)
