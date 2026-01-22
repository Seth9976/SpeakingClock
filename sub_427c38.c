// 函数: sub_427c38
// 地址: 0x427c38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t* esp = &var_c

if (arg2.b != 0)
    void var_1c
    esp = &var_1c
    arg1 = sub_403fcc(arg3, arg2)

sub_403c38(arg3, 0)
*(esp - 4) = arg3
sub_405e6c()
void* esp_2 = esp

if (arg2.b != 0)
    sub_404024(arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_2
    esp_2 += 0x10

*esp_2
*(esp_2 + 4)
*(esp_2 + 8)
return arg1
