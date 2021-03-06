/****************************************************************************
**
** QtDockTile - crossplatform for the work this docks 
**
** Copyright © 1301 USA
** Copyright © 2012 Sidorov Aleksey <gorthauer87@ya.ru>
**
*****************************************************************************
**
** $QTDOCKTILE_BEGIN_LICENSE$
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU Lesser General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
** See the GNU Lesser General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see http://www.gnu.org/licenses/.
** $QTDOCKTILE_END_LICENSE$
**
****************************************************************************/

#include "quickdocktile.h"

#include <QtDeclarative>
#include <qtdocktile.h>
#include <QDebug>

QuickDockTile::QuickDockTile()
{
	qDebug() << Q_FUNC_INFO;
}

void QuickDockTile::registerTypes(const char *uri)
{
    Q_ASSERT(uri == QLatin1String("Playground"));

	qmlRegisterType<QtDockTile>(uri, 1, 0, "DockTile");
}

Q_EXPORT_PLUGIN2(quickdocktile, QuickDockTile)

