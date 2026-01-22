// 函数: sub_4318dd
// 地址: 0x4318dd
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_403c68(*(arg1 - 0x38))
sub_404544()
sub_404598(arg2)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2
sub_402ec4(*(arg1 - 0x18))
int32_t* ebp = sub_4312bc(*(arg1 - 4), *(arg1 - 0x28), *(arg1 - 0x30), *(arg1 - 0x38), 
    *(arg1 - 0x21), arg1 - 0x9c)
int32_t eax_6
eax_6.b = (*(*ebp[-1] + 0x24))() != 0
*(ebp[-1] + 0x22) = eax_6.b
ebp[-1]
int32_t result = (*(*ebp[-1] + 0x10))()
*ebp
return result
