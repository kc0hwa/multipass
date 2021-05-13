/*
 * Copyright (C) 2021 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <multipass/file_ops.h>

namespace mp = multipass;

mp::FileOps::FileOps(const Singleton<FileOps>::PrivatePass& pass) noexcept : Singleton<FileOps>::Singleton{pass}
{
}

bool mp::FileOps::isReadable(QDir& dir) const
{
    return dir.isReadable();
}

bool mp::FileOps::rmdir(QDir& dir, const QString& dirName) const
{
    return dir.rmdir(dirName);
}

bool mp::FileOps::mkpath(QDir& dir, const QString& dirName) const
{
    return dir.mkpath(dirName);
}

bool mp::FileOps::open(QFile& file, QIODevice::OpenMode mode) const
{
    return file.open(mode);
}

bool mp::FileOps::is_open(const QFile& file) const
{
    return file.isOpen();
}

qint64 mp::FileOps::read(QFile& file, char* data, qint64 maxSize) const
{
    return file.read(data, maxSize);
}

QString mp::FileOps::read_line(QTextStream& text_stream) const
{
    return text_stream.readLine();
}

bool mp::FileOps::remove(QFile& file) const
{
    return file.remove();
}

bool mp::FileOps::rename(QFile& file, const QString& newName) const
{
    return file.rename(newName);
}

bool mp::FileOps::resize(QFile& file, qint64 sz) const
{
    return file.resize(sz);
}

bool mp::FileOps::seek(QFile& file, qint64 pos) const
{
    return file.seek(pos);
}

bool mp::FileOps::setPermissions(QFile& file, QFileDevice::Permissions permissions) const
{
    return file.setPermissions(permissions);
}

qint64 mp::FileOps::write(QFile& file, const char* data, qint64 maxSize) const
{
    return file.write(data, maxSize);
}

qint64 mp::FileOps::write(QFile& file, const QByteArray& data) const
{
    return file.write(data);
}

bool mp::FileOps::exists(QFile& file)
{
    return file.exists();
}
