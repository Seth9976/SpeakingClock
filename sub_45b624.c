// 函数: sub_45b624
// 地址: 0x45b624
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* edi = arg1
int32_t esi
esi.w = 0xfff5
sub_403e64(arg2, esi, edi)
sub_458ac8(edi, 1)
sub_458ac8(edi, 1)
sub_45b590(edi, arg2)

if ((arg2[7].b & 2) == 0)
    sub_458ac8(arg2, 0)
    sub_458ac8(arg2, 0)
    sub_458ac8(arg2, 0)
    sub_458ac8(arg2, 0)
    
    if (sub_403df4(arg2, &data_453234) == 0)
        if (sub_45fc28(edi) != 0)
            (*(*arg2 + 0x80))(arg2, edi)
    else
        sub_458ac8(arg2, 0)
        edi = sub_45c37c(edi)
    
    sub_45b27c(edi)

sub_458ac8(edi, 1)
return 0
