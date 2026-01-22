// 函数: sub_41f85a
// 地址: 0x41f85a
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(sub_402f2c() + 4)
void* esp

if ((*(**(arg1 - 4) + 0x10))() == 0)
    sub_404544()
    void arg_24
    esp = &arg_24

sub_404598()
*(esp - 4) = arg1
*(esp - 8) = 0x41f855
TEB* fsbase
*(esp - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp - 0xc
sub_41d748()
*(esp - 4)
fsbase->NtTib.ExceptionList = *(esp - 0xc)
*(esp + 8)
fsbase->NtTib.ExceptionList = *esp
*(esp + 0x14)
fsbase->NtTib.ExceptionList = *(esp + 0xc)
*(esp + 0x14) = 0x41f8ca
return (*(*data_4b19b4 + 0x18))()
