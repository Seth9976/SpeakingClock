// 函数: sub_431796
// 地址: 0x431796
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr

if (*(arg1 - 0x10) != 0)
    DeleteDC(*(arg1 - 0x10))

sub_402ec4(*(arg1 - 0x14))
fsbase->NtTib.ExceptionList = arg3
ReleaseDC(nullptr, *(arg1 - 0xc))

if (*(*(arg1 - 0x3c) + 0xe) u> 8 && *(*(arg1 - 0x3c) + 0x20) u> 0 && *(arg1 - 0x30) == 0)
    *(arg1 - 0x30) = sub_42d238(nullptr, *(arg1 - 0x1c), *(*(arg1 - 0x3c) + 0x20))

sub_403578(arg1 - 0x9c, 0x54, 0)
GetObjectA(*(arg1 - 0x28), 0x54, arg1 - 0x9c)
*(arg1 - 0x6c) = *(*(arg1 - 0x3c) + 0x18)
*(arg1 - 0x68) = *(*(arg1 - 0x3c) + 0x1c)
*(arg1 - 0x64) = *(*(arg1 - 0x3c) + 0x20)
*(arg1 - 0x60) = *(*(arg1 - 0x3c) + 0x24)
fsbase->NtTib.ExceptionList = arg5
fsbase->NtTib.ExceptionList = arg7
sub_402ec4(*(arg1 - 0x18))
int32_t* ebp = sub_4312bc(*(arg1 - 4), *(arg1 - 0x28), *(arg1 - 0x30), *(arg1 - 0x38), 
    *(arg1 - 0x21), arg1 - 0x9c)
int32_t eax_25
eax_25.b = (*(*ebp[-1] + 0x24))() != 0
*(ebp[-1] + 0x22) = eax_25.b
ebp[-1]
int32_t result = (*(*ebp[-1] + 0x10))()
*ebp
return result
