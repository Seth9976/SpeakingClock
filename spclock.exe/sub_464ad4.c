// 函数: sub_464ad4
// 地址: 0x464ad4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t* esp = &var_8
int32_t ecx

if (arg2.b != 0)
    void var_18
    esp = &var_18
    arg1 = sub_403fcc(ecx, arg2)

sub_403c38(ecx, 0)
arg1[1].b = 1
arg1[2] = 5
void* eax_2

if ((*data_4ac4d0 != 2 || *data_4ac120 s< 4) &&
        (*data_4ac4d0 != 1 || (*data_4ac120 s<= 4 && (*data_4ac120 != 4 || *data_4ac358 s< 0xa))))
    eax_2 = nullptr
else
    eax_2.b = 1

*(arg1 + 0xd) = eax_2.b
sub_464cc4(arg1, 0)

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return arg1
