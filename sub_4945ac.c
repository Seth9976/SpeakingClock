// 函数: sub_4945ac
// 地址: 0x4945ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

switch (zx.d(*(arg1 + 0x20)))
    case 0
        sub_404bdc(arg2, "Disabled")
    case 1
        sub_404bdc(arg2, "BitmapBrush")
    case 2
        sub_404bdc(arg2, "Brush")
    case 3
        sub_404bdc(arg2, "Bitmap")
    case 4
        sub_404bdc(arg2, "BitmapList")
    case 5
        sub_404bdc(arg2, "Gradient")

void* const var_8 = &data_4946bc
int64_t* var_c = *arg2
void* const var_10 = &data_4946c8
return sub_404f1c(arg2, 3)
