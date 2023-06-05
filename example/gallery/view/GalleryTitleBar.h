﻿#ifndef GALLERYTITLEBAR_H
#define GALLERYTITLEBAR_H

#include <FramelessHelper/Widgets/standardtitlebar.h>

typedef FRAMELESSHELPER_PREPEND_NAMESPACE(StandardTitleBar) StandardTitleBar;

class GalleryTitleBar : public StandardTitleBar
{
public:
    GalleryTitleBar(QWidget *parent = nullptr);
};

#endif  // GALLERYTITLEBAR_H