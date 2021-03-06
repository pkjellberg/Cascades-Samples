/* Copyright (c) 2012 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "poemmaker.h"

#include <bb/cascades/Page>
#include <bb/cascades/QmlDocument>

using namespace bb::cascades;

PoemMaker::PoemMaker()
{
    // Create a QMLDocument and load it with main.qml, using build patterns.
    QmlDocument *qml = QmlDocument::create("asset:///main.qml");

    if (!qml->hasErrors()) {

        // An application Page is created from QML.
        Page *appPage = qml->createRootObject<Page>();

        if (appPage) {
            // Finally the main scene for the application is set to the Page.
            Application::instance()->setScene(appPage);
        }
    }
}

