// 函数: sub_49217c
// 地址: 0x49217c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t* esp = &var_c

if (arg2.b != 0)
    void var_1c
    esp = &var_1c
    arg1 = sub_403fcc(ecx, arg2)

var_8:3.b = arg2.b
sub_4894c0(arg1, 0)
arg1[0x17] = &data_491d94
arg1[0x18].b = 3

if (*(data_4ac3bc + 3) == 0)
    *(data_4ac3bc + 3) = 1
    ebp_1 = sub_419634(&data_491d94)

if (*(ebp_1 - 1) != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
esp[2]
return arg1
